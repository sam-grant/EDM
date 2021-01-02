void quadScans()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jan  2 15:21:47 2021) by ROOT version 6.22/06
   TCanvas *c1 = new TCanvas("c1", "c1",0,45,800,600);
   c1->Range(0.04581371,71.125,0.0803506,79.875);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetRightMargin(0.2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph0_fy1001[4] = {
   72.9288,
   73.119,
   73.2948,
   73.395};
   Double_t Graph0_fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[4] = {
   0.0226779,
   0.022902,
   0.0172034,
   0.0139087};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,0.0492674,0.07344322);
   Graph_Graph01001->SetMinimum(72);
   Graph_Graph01001->SetMaximum(79);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *quadFit_m301002 = new TF1("quadFit_m30","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadFit_m301002->SetFillColor(19);
   quadFit_m301002->SetFillStyle(0);
   quadFit_m301002->SetLineColor(2);
   quadFit_m301002->SetLineWidth(2);
   quadFit_m301002->SetChisquare(0.3792668);
   quadFit_m301002->SetNDF(2);
   quadFit_m301002->GetXaxis()->SetLabelFont(42);
   quadFit_m301002->GetXaxis()->SetTitleOffset(1);
   quadFit_m301002->GetXaxis()->SetTitleFont(42);
   quadFit_m301002->GetYaxis()->SetLabelFont(42);
   quadFit_m301002->GetYaxis()->SetTitleFont(42);
   quadFit_m301002->SetParameter(0,74.59266);
   quadFit_m301002->SetParError(0,0.07237928);
   quadFit_m301002->SetParLimits(0,0,0);
   quadFit_m301002->SetParameter(1,-23.38198);
   quadFit_m301002->SetParError(1,1.252726);
   quadFit_m301002->SetParLimits(1,0,0);
   quadFit_m301002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadFit_m301002);
   gre->Draw("ap");
   
   Double_t Graph1_fx1003[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph1_fy1003[3] = {
   72.0732,
   72.3307,
   72.5039};
   Double_t Graph1_fex1003[3] = {
   0,
   0,
   0};
   Double_t Graph1_fey1003[3] = {
   0.0225984,
   0.0175252,
   0.0187124};
   gre = new TGraphErrors(3,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,0.05016026,0.06362179);
   Graph_Graph11003->SetMinimum(72.0034);
   Graph_Graph11003->SetMaximum(72.56981);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11003->SetLineColor(ci);
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
   
   TF1 *quadFit_m501004 = new TF1("quadFit_m50","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadFit_m501004->SetFillColor(19);
   quadFit_m501004->SetFillStyle(0);
   quadFit_m501004->SetLineColor(2);
   quadFit_m501004->SetLineWidth(2);
   quadFit_m501004->SetChisquare(0.1615032);
   quadFit_m501004->SetNDF(1);
   quadFit_m501004->GetXaxis()->SetLabelFont(42);
   quadFit_m501004->GetXaxis()->SetTitleOffset(1);
   quadFit_m501004->GetXaxis()->SetTitleFont(42);
   quadFit_m501004->GetYaxis()->SetLabelFont(42);
   quadFit_m501004->GetYaxis()->SetTitleFont(42);
   quadFit_m501004->SetParameter(0,74.46718);
   quadFit_m501004->SetParError(0,0.1460986);
   quadFit_m501004->SetParLimits(0,0,0);
   quadFit_m501004->SetParameter(1,-38.35878);
   quadFit_m501004->SetParError(1,2.614006);
   quadFit_m501004->SetParLimits(1,0,0);
   quadFit_m501004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadFit_m501004);
   gre->Draw("p ");
   
   Double_t Graph2_fx1005[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph2_fy1005[4] = {
   74.1448,
   74.2453,
   74.2103,
   74.3001};
   Double_t Graph2_fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1005[4] = {
   0.0178356,
   0.0190314,
   0.0186503,
   0.021126};
   gre = new TGraphErrors(4,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph21005 = new TH1F("Graph_Graph21005","Graph",100,0.0492674,0.07344322);
   Graph_Graph21005->SetMinimum(74.10754);
   Graph_Graph21005->SetMaximum(74.34065);
   Graph_Graph21005->SetDirectory(0);
   Graph_Graph21005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21005->SetLineColor(ci);
   Graph_Graph21005->GetXaxis()->SetLabelFont(42);
   Graph_Graph21005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetXaxis()->SetTitleFont(42);
   Graph_Graph21005->GetYaxis()->SetLabelFont(42);
   Graph_Graph21005->GetYaxis()->SetTitleFont(42);
   Graph_Graph21005->GetZaxis()->SetLabelFont(42);
   Graph_Graph21005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21005);
   
   
   TF1 *quadFit_m101006 = new TF1("quadFit_m10","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadFit_m101006->SetFillColor(19);
   quadFit_m101006->SetFillStyle(0);
   quadFit_m101006->SetLineColor(2);
   quadFit_m101006->SetLineWidth(2);
   quadFit_m101006->SetChisquare(9.933682);
   quadFit_m101006->SetNDF(2);
   quadFit_m101006->GetXaxis()->SetLabelFont(42);
   quadFit_m101006->GetXaxis()->SetTitleOffset(1);
   quadFit_m101006->GetXaxis()->SetTitleFont(42);
   quadFit_m101006->GetYaxis()->SetLabelFont(42);
   quadFit_m101006->GetYaxis()->SetTitleFont(42);
   quadFit_m101006->SetParameter(0,74.59232);
   quadFit_m101006->SetParError(0,0.07649458);
   quadFit_m101006->SetParLimits(0,0,0);
   quadFit_m101006->SetParameter(1,-6.130468);
   quadFit_m101006->SetParError(1,1.245178);
   quadFit_m101006->SetParLimits(1,0,0);
   quadFit_m101006->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadFit_m101006);
   gre->Draw("p ");
   
   Double_t Graph3_fx1007[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t Graph3_fy1007[3] = {
   75.3559,
   75.2584,
   75.1707};
   Double_t Graph3_fex1007[3] = {
   0,
   0,
   0};
   Double_t Graph3_fey1007[3] = {
   0.0217483,
   0.0147147,
   0.0190428};
   gre = new TGraphErrors(3,Graph3_fx1007,Graph3_fy1007,Graph3_fex1007,Graph3_fey1007);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph31007 = new TH1F("Graph_Graph31007","Graph",100,0.0492674,0.07344322);
   Graph_Graph31007->SetMinimum(75.12906);
   Graph_Graph31007->SetMaximum(75.40025);
   Graph_Graph31007->SetDirectory(0);
   Graph_Graph31007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31007->SetLineColor(ci);
   Graph_Graph31007->GetXaxis()->SetLabelFont(42);
   Graph_Graph31007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31007->GetXaxis()->SetTitleFont(42);
   Graph_Graph31007->GetYaxis()->SetLabelFont(42);
   Graph_Graph31007->GetYaxis()->SetTitleFont(42);
   Graph_Graph31007->GetZaxis()->SetLabelFont(42);
   Graph_Graph31007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31007);
   
   
   TF1 *quadFit_p101008 = new TF1("quadFit_p10","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadFit_p101008->SetFillColor(19);
   quadFit_p101008->SetFillStyle(0);
   quadFit_p101008->SetLineColor(2);
   quadFit_p101008->SetLineWidth(2);
   quadFit_p101008->SetChisquare(0.5475677);
   quadFit_p101008->SetNDF(1);
   quadFit_p101008->GetXaxis()->SetLabelFont(42);
   quadFit_p101008->GetXaxis()->SetTitleOffset(1);
   quadFit_p101008->GetXaxis()->SetTitleFont(42);
   quadFit_p101008->GetYaxis()->SetLabelFont(42);
   quadFit_p101008->GetYaxis()->SetTitleFont(42);
   quadFit_p101008->SetParameter(0,74.70285);
   quadFit_p101008->SetParError(0,0.08717108);
   quadFit_p101008->SetParLimits(0,0,0);
   quadFit_p101008->SetParameter(1,9.011741);
   quadFit_p101008->SetParError(1,1.413774);
   quadFit_p101008->SetParLimits(1,0,0);
   quadFit_p101008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadFit_p101008);
   gre->Draw("p ");
   
   Double_t Graph4_fx1009[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph4_fy1009[4] = {
   76.5313,
   76.3535,
   76.1957,
   76.1127};
   Double_t Graph4_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1009[4] = {
   0.0178466,
   0.0254065,
   0.0168674,
   0.0204641};
   gre = new TGraphErrors(4,Graph4_fx1009,Graph4_fy1009,Graph4_fex1009,Graph4_fey1009);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph41009 = new TH1F("Graph_Graph41009","Graph",100,0.0492674,0.07344322);
   Graph_Graph41009->SetMinimum(76.04654);
   Graph_Graph41009->SetMaximum(76.59484);
   Graph_Graph41009->SetDirectory(0);
   Graph_Graph41009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41009->SetLineColor(ci);
   Graph_Graph41009->GetXaxis()->SetLabelFont(42);
   Graph_Graph41009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph41009->GetXaxis()->SetTitleFont(42);
   Graph_Graph41009->GetYaxis()->SetLabelFont(42);
   Graph_Graph41009->GetYaxis()->SetTitleFont(42);
   Graph_Graph41009->GetZaxis()->SetLabelFont(42);
   Graph_Graph41009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph41009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41009);
   
   
   TF1 *quadFit_p301010 = new TF1("quadFit_p30","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadFit_p301010->SetFillColor(19);
   quadFit_p301010->SetFillStyle(0);
   quadFit_p301010->SetLineColor(2);
   quadFit_p301010->SetLineWidth(2);
   quadFit_p301010->SetChisquare(0.1809422);
   quadFit_p301010->SetNDF(2);
   quadFit_p301010->GetXaxis()->SetLabelFont(42);
   quadFit_p301010->GetXaxis()->SetTitleOffset(1);
   quadFit_p301010->GetXaxis()->SetTitleFont(42);
   quadFit_p301010->GetYaxis()->SetLabelFont(42);
   quadFit_p301010->GetYaxis()->SetTitleFont(42);
   quadFit_p301010->SetParameter(0,75.0353);
   quadFit_p301010->SetParError(0,0.074342);
   quadFit_p301010->SetParLimits(0,0,0);
   quadFit_p301010->SetParameter(1,20.9615);
   quadFit_p301010->SetParError(1,1.222027);
   quadFit_p301010->SetParLimits(1,0,0);
   quadFit_p301010->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadFit_p301010);
   gre->Draw("p ");
   
   Double_t Graph5_fx1011[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t Graph5_fy1011[4] = {
   77.7892,
   77.436,
   77.1666,
   77.0001};
   Double_t Graph5_fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph5_fey1011[4] = {
   0.0249031,
   0.0198802,
   0.0206094,
   0.0201256};
   gre = new TGraphErrors(4,Graph5_fx1011,Graph5_fy1011,Graph5_fex1011,Graph5_fey1011);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph51011 = new TH1F("Graph_Graph51011","Graph",100,0.0492674,0.07344322);
   Graph_Graph51011->SetMinimum(76.89656);
   Graph_Graph51011->SetMaximum(77.89752);
   Graph_Graph51011->SetDirectory(0);
   Graph_Graph51011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph51011->SetLineColor(ci);
   Graph_Graph51011->GetXaxis()->SetLabelFont(42);
   Graph_Graph51011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph51011->GetXaxis()->SetTitleFont(42);
   Graph_Graph51011->GetYaxis()->SetLabelFont(42);
   Graph_Graph51011->GetYaxis()->SetTitleFont(42);
   Graph_Graph51011->GetZaxis()->SetLabelFont(42);
   Graph_Graph51011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph51011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph51011);
   
   
   TF1 *quadFit_p501012 = new TF1("quadFit_p50","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadFit_p501012->SetFillColor(19);
   quadFit_p501012->SetFillStyle(0);
   quadFit_p501012->SetLineColor(2);
   quadFit_p501012->SetLineWidth(2);
   quadFit_p501012->SetChisquare(0.01829789);
   quadFit_p501012->SetNDF(2);
   quadFit_p501012->GetXaxis()->SetLabelFont(42);
   quadFit_p501012->GetXaxis()->SetTitleOffset(1);
   quadFit_p501012->GetXaxis()->SetTitleFont(42);
   quadFit_p501012->GetYaxis()->SetLabelFont(42);
   quadFit_p501012->GetYaxis()->SetTitleFont(42);
   quadFit_p501012->SetParameter(0,74.99308);
   quadFit_p501012->SetParError(0,0.08843634);
   quadFit_p501012->SetParLimits(0,0,0);
   quadFit_p501012->SetParameter(1,39.12059);
   quadFit_p501012->SetParError(1,1.483337);
   quadFit_p501012->SetParLimits(1,0,0);
   quadFit_p501012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadFit_p501012);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","#minus50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","#minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","#minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","+10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","+30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","+50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
