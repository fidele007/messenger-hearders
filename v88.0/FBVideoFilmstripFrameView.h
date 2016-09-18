/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBVideoFilmstripFrameViewDelegate;
@class UIImageView, FBVideoFilmstripFrameViewModel;

@interface FBVideoFilmstripFrameView : UIView {

	UIImageView* _imageView;
	BOOL _crossfadesUpdates;
	id<FBVideoFilmstripFrameViewDelegate> _delegate;
	double _contentAspectRatio;
	FBVideoFilmstripFrameViewModel* _frameViewModel;

}

@property (assign,nonatomic,__weak) id<FBVideoFilmstripFrameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double contentAspectRatio;                                          //@synthesize contentAspectRatio=_contentAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL crossfadesUpdates;                                             //@synthesize crossfadesUpdates=_crossfadesUpdates - In the implementation block
@property (nonatomic,retain) FBVideoFilmstripFrameViewModel * frameViewModel;                    //@synthesize frameViewModel=_frameViewModel - In the implementation block
-(void)setContentAspectRatio:(double)arg1 ;
-(void)_stopFilmstripObservation;
-(void)setFrameViewModel:(FBVideoFilmstripFrameViewModel *)arg1 ;
-(BOOL)crossfadesUpdates;
-(void)setCrossfadesUpdates:(BOOL)arg1 ;
-(FBVideoFilmstripFrameViewModel *)frameViewModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)setDelegate:(id<FBVideoFilmstripFrameViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBVideoFilmstripFrameViewDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)contentAspectRatio;
@end

