/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBUIKitPath;

@interface FBUIKitRenderedImageMetadata : FBValueObject <NSCopying> {

	BOOL _fill;
	BOOL _stroke;
	NSString* _name;
	FBUIKitPath* _path;
	double _width;
	double _height;

}

@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) FBUIKitPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) double width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) BOOL fill;                            //@synthesize fill=_fill - In the implementation block
@property (nonatomic,readonly) BOOL stroke;                          //@synthesize stroke=_stroke - In the implementation block
-(id)initWithName:(id)arg1 path:(id)arg2 width:(double)arg3 height:(double)arg4 fill:(BOOL)arg5 stroke:(BOOL)arg6 ;
-(NSString *)name;
-(FBUIKitPath *)path;
-(BOOL)fill;
-(BOOL)stroke;
-(double)width;
-(double)height;
@end

