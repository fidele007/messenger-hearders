/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMediaCreativeToolFilter, FBMediaCreativeToolMask, NSArray, NSDictionary;

@interface FBMediaCreativeToolsModel : NSObject <NSCopying> {

	FBMediaCreativeToolFilter* _identityFilter;
	FBMediaCreativeToolMask* _identityMask;
	NSArray* _filters;
	NSArray* _masks;
	NSArray* _drawColors;
	unsigned long long _strokeCount;
	NSArray* _mlModelAssets;
	NSDictionary* _customTools;

}

@property (nonatomic,readonly) unsigned long long numberOfTools; 
@property (nonatomic,copy,readonly) NSArray * filters;                        //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * drawColors;                     //@synthesize drawColors=_drawColors - In the implementation block
@property (assign,nonatomic) unsigned long long strokeCount;                  //@synthesize strokeCount=_strokeCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mlModelAssets;                  //@synthesize mlModelAssets=_mlModelAssets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * masks;                          //@synthesize masks=_masks - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * customTools;               //@synthesize customTools=_customTools - In the implementation block
-(id)initWithFilters:(id)arg1 drawColors:(id)arg2 mlModelAssets:(id)arg3 masks:(id)arg4 customTools:(id)arg5 ;
-(NSArray *)masks;
-(NSArray *)mlModelAssets;
-(NSArray *)drawColors;
-(void)setStrokeCount:(unsigned long long)arg1 ;
-(id)modelByAddingCustomTools:(id)arg1 ;
-(unsigned long long)numberOfTools;
-(NSDictionary *)customTools;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)filters;
-(unsigned long long)strokeCount;
@end
