/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface FBBugReportScreenshotInfo : NSObject {

	NSString* _filename;
	UIImage* _image;

}

@property (nonatomic,copy,readonly) NSString * filename;              //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
-(id)initWithFilename:(id)arg1 andImage:(id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)filename;
@end

