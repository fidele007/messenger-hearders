/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNInboxUnitShareViewDelegate.h>
#import <Messenger/MNInboxUnitViewProviding.h>
#import <Messenger/MNInboxUnitViewConfiguring.h>
#import <Messenger/MNInboxUnitViewTappable.h>

@protocol MNInboxUnitViewTapDelegate;
@class NSString;

@interface MNInboxUnitShareViewProvider : NSObject <MNInboxUnitShareViewDelegate, MNInboxUnitViewProviding, MNInboxUnitViewConfiguring, MNInboxUnitViewTappable> {

	id<MNInboxUnitViewTapDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNInboxUnitViewTapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(Class)viewClassForViewModel:(id)arg1 ;
-(id)viewForViewModel:(id)arg1 ;
-(id)viewModelForView:(id)arg1 ;
-(void)configureView:(id)arg1 withViewModel:(id)arg2 ;
-(CGSize)sizeForViewModel:(id)arg1 collectionViewSize:(CGSize)arg2 ;
-(double)layerZPositionForViewModel:(id)arg1 ;
-(void)inboxUnitShareViewDidTapShareButton:(id)arg1 ;
-(void)setDelegate:(id<MNInboxUnitViewTapDelegate>)arg1 ;
-(id<MNInboxUnitViewTapDelegate>)delegate;
@end

