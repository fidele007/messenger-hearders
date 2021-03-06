/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUpdateAnnouncingCollectionView.h>
#import <Messenger/FBCollectionViewTransitionProtocol.h>

@class FBFeedView, NSString;

@interface FBFeedCollectionView : FBUpdateAnnouncingCollectionView <FBCollectionViewTransitionProtocol> {

	FBFeedView* _feedView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) FBFeedView * feedView;              //@synthesize feedView=_feedView - In the implementation block
-(FBFeedView *)feedView;
-(void)setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setFeedView:(FBFeedView *)arg1 ;
-(CGRect)rectForRowAtIndexPath:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(id)indexPathForRowAtPoint:(CGPoint)arg1 ;
@end

