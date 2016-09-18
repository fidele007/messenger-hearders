/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNPhotoPreviewing.h>
#import <Messenger/MNPhotoViewNodeCellLike.h>

@class MNPhotoViewNode, NSString;

@interface MNPhotoViewNodeCell : UICollectionViewCell <MNPhotoPreviewing, MNPhotoViewNodeCellLike> {

	MNPhotoViewNode* _photoViewNode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MNPhotoViewNode * photoViewNode;              //@synthesize photoViewNode=_photoViewNode - In the implementation block
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setPhotoViewNode:(MNPhotoViewNode *)arg1 ;
-(MNPhotoViewNode *)photoViewNode;
-(void)layoutSubviews;
-(BOOL)isAccessibilityElement;
@end

