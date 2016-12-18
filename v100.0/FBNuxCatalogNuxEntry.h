/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class FBNuxConfiguration, NSMutableDictionary;

@interface FBNuxCatalogNuxEntry : NSObject <NSCoding> {

	FBNuxConfiguration* _nuxConfiguration;
	NSMutableDictionary* _recordsByVersion;

}

@property (nonatomic,readonly) FBNuxConfiguration * nuxConfiguration;               //@synthesize nuxConfiguration=_nuxConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * recordsByVersion;              //@synthesize recordsByVersion=_recordsByVersion - In the implementation block
-(FBNuxConfiguration *)nuxConfiguration;
-(NSMutableDictionary *)recordsByVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end
