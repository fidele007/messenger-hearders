/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSDictionary;

@interface FBSectionComponentDataSourceModel : NSObject {

	id<NSObject> _model;
	id<NSObject> _context;
	/*^block*/id _componentBlock;
	NSDictionary* _accessoryModel;

}

@property (nonatomic,copy,readonly) NSDictionary * accessoryModel;              //@synthesize accessoryModel=_accessoryModel - In the implementation block
@property (nonatomic,readonly) id<NSObject> model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) id<NSObject> context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) id componentBlock;                          //@synthesize componentBlock=_componentBlock - In the implementation block
-(id)initWithModel:(id)arg1 context:(id)arg2 componentBlock:(/*^block*/id)arg3 accessoryModel:(id)arg4 ;
-(id)initWithModel:(id)arg1 context:(id)arg2 componentBlock:(/*^block*/id)arg3 ;
-(id)componentBlock;
-(NSDictionary *)accessoryModel;
-(id)description;
-(id<NSObject>)context;
-(id<NSObject>)model;
@end
