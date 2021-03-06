/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentDefaultViewController.h>
#import <Messenger/MNGroupsAttachmentViewDelegate.h>

@protocol FBIntentHandler, MNAlertControllerPresenting;
@class FBUserSession, NSString;

@interface MNGroupsAttachmentViewController : MNAttachmentDefaultViewController <MNGroupsAttachmentViewDelegate> {

	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	id<MNAlertControllerPresenting> _alertControllerPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)groupsAttachmentView:(id)arg1 didSelectActionButton:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)groupsAttachmentView:(id)arg1 didSelectGroup:(id)arg2 ;
-(void)requestToJoinGroup:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 intentHandler:(id)arg2 alertControllerPresenter:(id)arg3 ;
@end

