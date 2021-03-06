/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBAnnouncerBase.h>
#import <Messenger/FBScrollingContentViewControllerListener.h>

@class NSMutableDictionary, UIScrollView, NSString;

@interface FBScrollingContentViewControllerListenerAnnouncer : FBAnnouncerBase <FBScrollingContentViewControllerListener> {

	NSMutableDictionary* _sidefeedYOffsets;
	UIScrollView* _lastKnownScrollView;

}

@property (nonatomic,readonly) double lastKnownSidefeedYOffset; 
@property (nonatomic,__weak,readonly) UIScrollView * lastKnownScrollView;              //@synthesize lastKnownScrollView=_lastKnownScrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollingContentViewControllerDidChangeSidefeedYOffset:(double)arg1 forKey:(id)arg2 ;
-(void)scrollingContentViewControllerDidChangeScrollView:(id)arg1 ;
-(double)lastKnownSidefeedYOffset;
-(UIScrollView *)lastKnownScrollView;
-(id)init;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

