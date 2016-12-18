/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedEntityWithImageFieldsProtocol;
@class NSNumber, FBMemModelObject;

@interface FBImageAtRange : NSObject {

	NSNumber* _offset;
	NSNumber* _length;
	FBMemModelObject*<FBQueriedEntityWithImageFieldsProtocol> _entityWithImage;

}

@property (nonatomic,retain) NSNumber * offset;                                                                      //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) NSNumber * length;                                                                      //@synthesize length=_length - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedEntityWithImageFieldsProtocol> entityWithImage;              //@synthesize entityWithImage=_entityWithImage - In the implementation block
+(id)graphQLTypeName;
+(id)entityName;
-(FBMemModelObject*<FBQueriedEntityWithImageFieldsProtocol>)entityWithImage;
-(void)setEntityWithImage:(FBMemModelObject*<FBQueriedEntityWithImageFieldsProtocol>)arg1 ;
-(NSNumber *)length;
-(void)setOffset:(NSNumber *)arg1 ;
-(NSNumber *)offset;
-(void)setLength:(NSNumber *)arg1 ;
@end

