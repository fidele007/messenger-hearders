/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface MNMessageContextMenuAction : NSObject {

	NSString* _title;
	UIImage* _image;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) id actionBlock;                     //@synthesize actionBlock=_actionBlock - In the implementation block
-(id)initWithTitle:(id)arg1 image:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(NSString *)title;
-(UIImage *)image;
-(id)actionBlock;
@end

