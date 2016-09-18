/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
