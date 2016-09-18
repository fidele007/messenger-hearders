/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBMorphableButtonContent : NSObject {

	NSString* _title;
	unsigned long long _glyphName;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;              //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,readonly) id actionBlock;                            //@synthesize actionBlock=_actionBlock - In the implementation block
-(id)initWithTitle:(id)arg1 glyphName:(unsigned long long)arg2 actionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)glyphName;
-(NSString *)title;
-(id)actionBlock;
@end

