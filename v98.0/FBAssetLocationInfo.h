/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLLocation;

@interface FBAssetLocationInfo : FBValueObject <NSCopying> {

	BOOL _isLandmark;
	NSString* _name;
	CLLocation* _location;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL isLandmark;                         //@synthesize isLandmark=_isLandmark - In the implementation block
-(BOOL)isLandmark;
-(id)initWithName:(id)arg1 location:(id)arg2 isLandmark:(BOOL)arg3 ;
-(NSString *)name;
-(CLLocation *)location;
@end

