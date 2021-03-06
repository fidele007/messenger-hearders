/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBURLSegue : NSObject {

	NSString* _host;
	/*^block*/id _viewControllerProvider;
	/*^block*/id _intentTargetProvider;
	/*^block*/id _analyticsInfoProvider;

}

@property (nonatomic,readonly) id viewControllerProvider;              //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
@property (nonatomic,readonly) id intentTargetProvider;                //@synthesize intentTargetProvider=_intentTargetProvider - In the implementation block
@property (nonatomic,readonly) id analyticsInfoProvider;               //@synthesize analyticsInfoProvider=_analyticsInfoProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * host;                   //@synthesize host=_host - In the implementation block
+(id)URLSegueWithHost:(id)arg1 intentTargetProvider:(/*^block*/id)arg2 ;
+(id)URLSegueWithHost:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)URLSegueWithHost:(id)arg1 intentTargetProvider:(/*^block*/id)arg2 analyticsInfoProvider:(/*^block*/id)arg3 ;
+(id)URLSegueWithHost:(id)arg1 viewControllerProvider:(/*^block*/id)arg2 intentTargetProvider:(/*^block*/id)arg3 analyticsInfoProvider:(/*^block*/id)arg4 ;
-(id)initWithHost:(id)arg1 viewControllerProvider:(/*^block*/id)arg2 intentTargetProvider:(/*^block*/id)arg3 analyticsInfoProvider:(/*^block*/id)arg4 ;
-(id)viewControllerProvider;
-(id)intentTargetProvider;
-(id)analyticsInfoProvider;
-(id)description;
-(NSString *)host;
@end

