/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAppStateLogger, FBVersionHandler, FBExceptionHandler, FBOOMArchiver, FBApplicationStatusProvider;

@interface FBColdStartReasonResolverContext : NSObject {

	FBAppStateLogger* _appStateLogger;
	FBVersionHandler* _appVersionHandler;
	FBVersionHandler* _osVersionHandler;
	FBExceptionHandler* _exceptionHandler;
	FBOOMArchiver* _oomArchiver;
	FBApplicationStatusProvider* _applicationStatusProvider;

}

@property (nonatomic,readonly) FBAppStateLogger * appStateLogger;                                    //@synthesize appStateLogger=_appStateLogger - In the implementation block
@property (nonatomic,readonly) FBVersionHandler * appVersionHandler;                                 //@synthesize appVersionHandler=_appVersionHandler - In the implementation block
@property (nonatomic,readonly) FBVersionHandler * osVersionHandler;                                  //@synthesize osVersionHandler=_osVersionHandler - In the implementation block
@property (nonatomic,readonly) FBExceptionHandler * exceptionHandler;                                //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,readonly) FBOOMArchiver * oomArchiver;                                          //@synthesize oomArchiver=_oomArchiver - In the implementation block
@property (nonatomic,readonly) FBApplicationStatusProvider * applicationStatusProvider;              //@synthesize applicationStatusProvider=_applicationStatusProvider - In the implementation block
-(FBVersionHandler *)osVersionHandler;
-(FBVersionHandler *)appVersionHandler;
-(FBAppStateLogger *)appStateLogger;
-(FBApplicationStatusProvider *)applicationStatusProvider;
-(FBOOMArchiver *)oomArchiver;
-(id)initWithAppStateLogger:(id)arg1 appVersionHandler:(id)arg2 osVersionHandler:(id)arg3 exceptionHandler:(id)arg4 oomArchiver:(id)arg5 applicationStatusProvider:(id)arg6 ;
-(FBExceptionHandler *)exceptionHandler;
@end
