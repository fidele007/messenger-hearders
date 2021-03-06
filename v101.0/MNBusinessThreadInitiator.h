/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesAppearanceEventListener.h>

@class FBUserSession, MNBusinessNavigationHandler, NSString;

@interface MNBusinessThreadInitiator : NSObject <MNMessagesAppearanceEventListener> {

	FBUserSession* _session;
	BOOL _isInitiating;
	MNBusinessNavigationHandler* _navigationHandler;

}

@property (assign,nonatomic,__weak) MNBusinessNavigationHandler * navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
-(void)messagesViewDidLoseFocus;
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)setNavigationHandler:(MNBusinessNavigationHandler *)arg1 ;
-(MNBusinessNavigationHandler *)navigationHandler;
-(void)_startThreadInitiationWithTermsWithAgentID:(id)arg1 ;
-(void)_startThreadInitiationWithBusinessPageID:(id)arg1 ;
-(void)_mutateLinkWithBusinessPageId:(id)arg1 isAgent:(BOOL)arg2 ;
-(BOOL)_hasAgreedTermsLocally;
-(void)_fetchLinkToPageID:(id)arg1 ;
-(void)_showTermsAlertWithAgentID:(id)arg1 ;
-(void)_buttonClickHandler:(unsigned long long)arg1 agentID:(id)arg2 ;
-(void)_processLinkCheckResults:(BOOL)arg1 agentID:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

