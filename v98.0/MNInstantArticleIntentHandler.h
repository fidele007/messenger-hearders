/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler, MNInstantArticleIntentHandlerDelegate;
@class FBUserSession;

@interface MNInstantArticleIntentHandler : NSObject {

	FBUserSession* _session;
	id<FBIntentHandler> _rootIntentHandler;
	id<MNInstantArticleIntentHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInstantArticleIntentHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)handleIntent:(id)arg1 ;
-(id)initWithSession:(id)arg1 rootIntentHandler:(id)arg2 ;
-(BOOL)_presentNativeArticleWithID:(id)arg1 shareURL:(id)arg2 analyticsInfo:(id)arg3 presentationSource:(id)arg4 ;
-(id)_nativeArticleLoaderFromProviderTarget:(id)arg1 ;
-(void)setDelegate:(id<MNInstantArticleIntentHandlerDelegate>)arg1 ;
-(id<MNInstantArticleIntentHandlerDelegate>)delegate;
@end
