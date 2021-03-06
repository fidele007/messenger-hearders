/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FNFDashRepresentationProperties : NSObject {

	unsigned _bandwidth;
	unsigned _width;
	unsigned _height;
	NSString* _representationId;
	NSString* _qualityLabel;

}

@property (nonatomic,copy,readonly) NSString * representationId;              //@synthesize representationId=_representationId - In the implementation block
@property (nonatomic,readonly) unsigned bandwidth;                            //@synthesize bandwidth=_bandwidth - In the implementation block
@property (nonatomic,copy,readonly) NSString * qualityLabel;                  //@synthesize qualityLabel=_qualityLabel - In the implementation block
@property (nonatomic,readonly) unsigned width;                                //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned height;                               //@synthesize height=_height - In the implementation block
-(NSString *)representationId;
-(NSString *)qualityLabel;
-(unsigned)width;
-(unsigned)height;
-(id)initWithTrack:(id)arg1 ;
-(unsigned)bandwidth;
@end

