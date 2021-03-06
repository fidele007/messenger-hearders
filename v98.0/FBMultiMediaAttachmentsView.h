/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBMultiMediaAttachmentsViewDelegate;
@class NSMutableArray, NSString;

@interface FBMultiMediaAttachmentsView : UIScrollView <UIGestureRecognizerDelegate> {

	NSMutableArray* _photoViews;
	id<FBMultiMediaAttachmentsViewDelegate> _photoAttachmentViewDelegate;

}

@property (nonatomic,readonly) double height; 
@property (assign,nonatomic,__weak) id<FBMultiMediaAttachmentsViewDelegate> photoAttachmentViewDelegate;              //@synthesize photoAttachmentViewDelegate=_photoAttachmentViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateAttachment;
-(void)addThumbnail:(id)arg1 forVideo:(BOOL)arg2 ;
-(void)removeThumbnailAtIndex:(unsigned long long)arg1 ;
-(void)setPhotoAttachmentViewDelegate:(id<FBMultiMediaAttachmentsViewDelegate>)arg1 ;
-(double)_scrollViewContentWidth;
-(id)_photoViewContainerForVideo:(BOOL)arg1 ;
-(unsigned long long)indexOfThumbnail:(id)arg1 ;
-(void)handlePhotoTap:(id)arg1 ;
-(void)removePhotoPressed:(id)arg1 ;
-(void)removeThumbnail:(id)arg1 ;
-(id<FBMultiMediaAttachmentsViewDelegate>)photoAttachmentViewDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)height;
@end

