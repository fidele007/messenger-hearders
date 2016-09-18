/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, UIImage, ASDisplayNode;

@interface FBNodeAdornment : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSAttributedString* _textAdornment_text;
	UIImage* _imageAdornment_image;
	ASDisplayNode* _nodeAdornment_node;

}
+(id)nodeAdornmentWithNode:(id)arg1 ;
+(id)imageAdornmentWithImage:(id)arg1 ;
+(id)textAdornmentWithText:(id)arg1 ;
-(void)matchTextAdornment:(/*^block*/id)arg1 imageAdornment:(/*^block*/id)arg2 nodeAdornment:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

