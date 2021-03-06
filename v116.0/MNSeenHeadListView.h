/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNSeenHeadView.h>

@class NSArray, NSString;

@interface MNSeenHeadListView : UIView <MNSeenHeadView> {

	unsigned long long _seenHeadSize;
	NSArray* _seenHeadViews;

}

@property (nonatomic,copy) NSArray * seenHeadViews;                        //@synthesize seenHeadViews=_seenHeadViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long seenHeadSize;              //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
-(void)setSeenHeadSize:(unsigned long long)arg1 ;
-(unsigned long long)seenHeadSize;
-(void)setSeenHeadViews:(NSArray *)arg1 ;
-(NSArray *)seenHeadViews;
-(void)_updateSeenHeadSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

