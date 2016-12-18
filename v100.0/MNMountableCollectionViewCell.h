/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNMontagePreviewing.h>
#import <Messenger/MNPhotoPreviewing.h>
#import <Messenger/MNProfilePreviewing.h>
#import <Messenger/MNStickerPreviewing.h>
#import <Messenger/MNThreadPreviewing.h>
#import <Messenger/MNVideoPreviewing.h>
#import <Messenger/MNCollectionViewLayoutAttributesTracking.h>

@class UIView, UICollectionViewLayoutAttributes, NSString;

@interface MNMountableCollectionViewCell : UICollectionViewCell <MNMontagePreviewing, MNPhotoPreviewing, MNProfilePreviewing, MNStickerPreviewing, MNThreadPreviewing, MNVideoPreviewing, MNCollectionViewLayoutAttributesTracking> {

	BOOL _disablesAnimation;
	UIView* _mountedView;
	UICollectionViewLayoutAttributes* _layoutAttributes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) UIView * mountedView;                                           //@synthesize mountedView=_mountedView - In the implementation block
@property (assign,nonatomic) BOOL disablesAnimation;                                         //@synthesize disablesAnimation=_disablesAnimation - In the implementation block
-(UIView *)mountedView;
-(void)setMountedView:(UIView *)arg1 ;
-(id)previewableStickerAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableThreadAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableVideoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableMontageAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)disablesAnimation;
-(void)setDisablesAnimation:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
@end
