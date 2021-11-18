void S12_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:33:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.6126,-0.001968715,2723.977,0.0009261816);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[12] = {
   175.6974,
   431.8439,
   628.5339,
   872.9366,
   1121.705,
   1371.45,
   1620.649,
   1868.435,
   2116.519,
   2362.784,
   2614.713,
   2825.506};
   Double_t Graph0_fy1044[12] = {
   -0.0005122443,
   -0.0001206352,
   9.019073e-05,
   6.973762e-05,
   0.0003132129,
   0.0001368693,
   -0.0004109185,
   -3.666752e-05,
   -0.0001418184,
   7.248496e-05,
   -0.0005802679,
   -0.001486232};
   Double_t Graph0_fex1044[12] = {
   1.268456,
   0.1208124,
   0.1086748,
   0.1093167,
   0.117365,
   0.126998,
   0.1395072,
   0.1594509,
   0.1910791,
   0.2419874,
   0.3185748,
   0.385685};
   Double_t Graph0_fey1044[12] = {
   -0.002605198,
   -0.0001338201,
   8.41851e-05,
   0.0001246903,
   0.000130486,
   0.0001260304,
   -0.000179892,
   -0.0002809886,
   -0.0003014589,
   0.0001141407,
   -0.0007016461,
   -0.0008077799};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12_",100,0,3091.037);
   Graph_Graph01044->SetMinimum(-0.001679225);
   Graph_Graph01044->SetMaximum(0.000636692);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(25,81);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
