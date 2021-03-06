/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionView;

@interface FBWebRTCGroupMultiView : UIView {

	UICollectionView* _collectionView;
	unsigned long long _layout;
	long long _selfViewOrientation;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) unsigned long long layout;                        //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long selfViewOrientation;                    //@synthesize selfViewOrientation=_selfViewOrientation - In the implementation block
-(void)setLayout:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelfViewOrientation:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 contentInsets:(UIEdgeInsets)arg2 ;
-(void)setSelfViewOrientation:(long long)arg1 ;
-(long long)selfViewOrientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)layout;
-(UICollectionView *)collectionView;
-(void)setLayout:(unsigned long long)arg1 ;
@end

