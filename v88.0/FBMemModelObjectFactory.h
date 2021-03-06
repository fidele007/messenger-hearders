/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphStoreObjectFactory.h>

@class NSString;

@interface FBMemModelObjectFactory : NSObject <FBGraphStoreObjectFactory> {

	const NodeFactory* _nodeFactory;
	const GraphQL1Schema* _graphQL1Schema;
	unique_ptr<facebook::mobile::graphstore::parser::GraphStoreGraphQLFactory, std::__1::default_delete<facebook::mobile::graphstore::parser::GraphStoreGraphQLFactory> >* _strategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNodeFactory:(const NodeFactory*)arg1 typeHelper:(const TypeHelper*)arg2 graphQL1Schema:(const GraphQL1Schema*)arg3 ;
-(id)allocFromTypeId:(unsigned)arg1 ;
-(id)newFromRecordAndSnapshot:(unique_ptr<facebook::mobile::FBMemModel::detail::RecordAndSnapshot, std::__1::default_delete<facebook::mobile::FBMemModel::detail::RecordAndSnapshot> >*)arg1 ;
-(id)newFromRecord:(const shared_ptr<const facebook::mobile::graphstore::Record>*)arg1 query:(id)arg2 source:(const shared_ptr<const facebook::mobile::graphstore::NodeSource>*)arg3 ;
-(const PlatformGraphQLFactory*)parsingStrategy;
-(const GraphQL1Schema*)graphQL1Schema;
-(const NodeFactory*)nodeFactory;
-(const GraphSchema*)graphSchema;
@end

