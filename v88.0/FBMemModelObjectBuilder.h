/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBMemModelObject;

@interface FBMemModelObjectBuilder : NSObject {

	unique_ptr<facebook::mobile::FBMemModel::detail::BuilderImplGraphStore, std::__1::default_delete<facebook::mobile::FBMemModel::detail::BuilderImplGraphStore> >* _impl;
	FBMemModelObject* _vendedResult;

}
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
-(id)getResult;
-(void)setPrimaryKeyValue:(id)arg1 ;
-(void)setValue:(id)arg1 forCanonicalName:(StringPiece)arg2 ;
-(id)init;
-(id)initWithImpl:(unique_ptr<facebook::mobile::FBMemModel::detail::BuilderImplGraphStore, std::__1::default_delete<facebook::mobile::FBMemModel::detail::BuilderImplGraphStore> >*)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

