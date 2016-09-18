/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryEntity.h>

@class NSString;

@interface FBRichStoryGeoAnnotation : NSObject <FBRichStoryEntity> {

	NSString* _name;
	unsigned long long _mapType;
	SCD_Struct_FB95 _region;

}

@property (nonatomic,readonly) SCD_Struct_FB96 region;                  //@synthesize region=_region - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)annotationWithRegion:(SCD_Struct_FB96)arg1 name:(id)arg2 mapType:(unsigned long long)arg3 ;
-(id)initWithRegion:(SCD_Struct_FB96)arg1 name:(id)arg2 mapType:(unsigned long long)arg3 ;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_FB96)region;
-(unsigned long long)mapType;
@end
