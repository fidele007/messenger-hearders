/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComposerPhotoOverlayView.h>
#import <Messenger/FBComposerPhotoOverlayViewProtocol.h>

@class UIImageView, FBMStickerView, NSNumber, NSString;

@interface FBComposerStickerView : FBComposerPhotoOverlayView <FBComposerPhotoOverlayViewProtocol> {

	UIImageView* _imageProvidedStickerView;
	FBMStickerView* _stickerView;
	NSNumber* _stickerID;

}

@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,copy) NSNumber * stickerID;                    //@synthesize stickerID=_stickerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerView:(id)arg1 ;
-(void)setStickerID:(NSNumber *)arg1 ;
-(id)getCurrentStickerImage;
-(NSNumber *)stickerID;
-(Class)photoOverlayAttachmentGestureHandlerClass;
-(void)_commonSetUpWithStickerID:(id)arg1 ;
-(void)_removeStickersViewGestures;
-(id)initWithStickerImage:(id)arg1 stickerID:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)contentView;
-(id)accessibilityIdentifier;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isAccessibilityElement;
@end

