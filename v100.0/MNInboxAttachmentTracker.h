/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNHorizontalScrollInboxUnitViewListening.h>

@class MNInboxImpressionTracker, NSString;

@interface MNInboxAttachmentTracker : NSObject <MNHorizontalScrollInboxUnitViewListening> {

	MNInboxImpressionTracker* _inboxImpressionTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInboxImpressionTracker:(id)arg1 ;
-(void)viewWillAppear:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidDisappear:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidTap:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidHighlight:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewDidUnhighlight:(id)arg1 withViewModel:(id)arg2 ;
-(void)viewModelsWillAppear:(id)arg1 ;
-(void)viewModelsWillDisappear:(id)arg1 ;
-(void)viewAnimationDidStop:(id)arg1 withViewModel:(id)arg2 ;
@end

