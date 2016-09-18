/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBWebImageViewListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/PHLivePhotoViewDelegate.h>

@protocol FBWebLivePhotoSupportingViewDelegate;
@class FBMemPhoto, FBUserSession, NSURL, PHLivePhoto, PHLivePhotoView, FBWebPhotoView, NSString;

@interface FBWebLivePhotoSupportingView : UIView <FBWebImageViewListener, UIGestureRecognizerDelegate, PHLivePhotoViewDelegate> {

	FBMemPhoto* _photo;
	FBUserSession* _session;
	NSURL* _remoteImageURL;
	id _videoAssetHandler;
	id _finalAssetHandler;
	PHLivePhoto* _livePhoto;
	PHLivePhotoView* _livePhotoView;
	int _livePhotoRequestID;
	BOOL _isPlaying;
	BOOL _livePhotoEnabled;
	id<FBWebLivePhotoSupportingViewDelegate> _delegate;
	FBWebPhotoView* _photoView;
	unsigned long long _livePhotoLoadingState;

}

@property (assign,nonatomic,__weak) id<FBWebLivePhotoSupportingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBWebPhotoView * photoView;                                          //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,retain) FBMemPhoto * photo;                                                    //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying;                                                      //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,getter=isLivePhotoEnabled,nonatomic) BOOL livePhotoEnabled;                       //@synthesize livePhotoEnabled=_livePhotoEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long livePhotoLoadingState;                            //@synthesize livePhotoLoadingState=_livePhotoLoadingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 imageFlags:(unsigned long long)arg2 ;
-(void)webImageView:(id)arg1 didUpdateLoadProgress:(double)arg2 ;
-(void)setLivePhotoEnabled:(BOOL)arg1 ;
-(void)_resetLivePhotoState;
-(void)_requestLivePhotoIfNeeded;
-(void)_setupLivePhotoViewIfNeeded;
-(void)_changeLivePhotoLoadingState:(unsigned long long)arg1 ;
-(void)_requestLivePhotoWithURLS:(id)arg1 forPhotoGraphQLID:(id)arg2 ;
-(void)_cleanupLivePhotoView;
-(void)_handleLivePhotoRequestResult:(id)arg1 hasError:(BOOL)arg2 forPhotoGraphQLID:(id)arg3 ;
-(BOOL)isLivePhotoEnabled;
-(unsigned long long)livePhotoLoadingState;
-(void)setDelegate:(id<FBWebLivePhotoSupportingViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebLivePhotoSupportingViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(FBMemPhoto *)photo;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(FBWebPhotoView *)photoView;
-(BOOL)isPlaying;
@end

