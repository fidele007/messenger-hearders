/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFilteredUIImage, UIView, NSMutableArray, UIImage;

@interface CPUFiltererWrapper : NSObject {

	BOOL _isThumbnail;
	BOOL _loadedDisplayImageSynchronously;
	FBFilteredUIImage* _cpuFilterer;
	UIView* _view;
	NSMutableArray* _cancelableFilterRequests;
	/*^block*/id _completionBlock;
	UIImage* _autoEnhancedImage;

}

@property (nonatomic,retain) FBFilteredUIImage * cpuFilterer;                        //@synthesize cpuFilterer=_cpuFilterer - In the implementation block
@property (nonatomic,retain) UIView * view;                                          //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSMutableArray * cancelableFilterRequests;              //@synthesize cancelableFilterRequests=_cancelableFilterRequests - In the implementation block
@property (nonatomic,copy) id completionBlock;                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) UIImage * autoEnhancedImage;                            //@synthesize autoEnhancedImage=_autoEnhancedImage - In the implementation block
@property (assign,nonatomic) BOOL isThumbnail;                                       //@synthesize isThumbnail=_isThumbnail - In the implementation block
@property (assign,nonatomic) BOOL loadedDisplayImageSynchronously;                   //@synthesize loadedDisplayImageSynchronously=_loadedDisplayImageSynchronously - In the implementation block
-(FBFilteredUIImage *)cpuFilterer;
-(void)setCpuFilterer:(FBFilteredUIImage *)arg1 ;
-(NSMutableArray *)cancelableFilterRequests;
-(void)setCancelableFilterRequests:(NSMutableArray *)arg1 ;
-(UIImage *)autoEnhancedImage;
-(void)setAutoEnhancedImage:(UIImage *)arg1 ;
-(BOOL)loadedDisplayImageSynchronously;
-(void)setLoadedDisplayImageSynchronously:(BOOL)arg1 ;
-(id)init;
-(UIView *)view;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(BOOL)isThumbnail;
-(void)setIsThumbnail:(BOOL)arg1 ;
@end

