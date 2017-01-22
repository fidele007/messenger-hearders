/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSURL, UIImage;

@interface FBImageModel : NSObject {

	NSURL* _source;
	UIImage* _image;
	CGSize _size;

}

@property (nonatomic,retain) NSURL * source;               //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize size;                  //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(void)setSource:(NSURL *)arg1 ;
-(NSURL *)source;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
@end
