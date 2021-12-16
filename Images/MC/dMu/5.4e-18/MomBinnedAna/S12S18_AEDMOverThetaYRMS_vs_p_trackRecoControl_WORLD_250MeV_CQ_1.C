void S12S18_AEDMOverThetaYRMS_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.8371,-0.01526789,3508.534,0.1451145);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1190[12] = {
   188.9695,
   434.5943,
   652.6751,
   883.9274,
   1126.188,
   1373.751,
   1622.443,
   1870.726,
   2119.143,
   2366.618,
   2613.353,
   2824.104};
   Double_t Graph0_fy1190[12] = {
   0.04991592,
   0.0009152901,
   0.002837581,
   0.005537026,
   0.006878823,
   0.01001342,
   0.01039002,
   0.01184759,
   0.008370277,
   0.01014626,
   0.01123448,
   0.009697698};
   Double_t Graph0_fex1190[12] = {
   0.713896,
   0.1447174,
   0.07967201,
   0.05375521,
   0.04973886,
   0.04976407,
   0.05188342,
   0.0561289,
   0.06355781,
   0.07480592,
   0.09437211,
   0.1178736};
   Double_t Graph0_fey1190[12] = {
   0.02710886,
   0.004068002,
   0.001645983,
   0.001074416,
   0.0009756002,
   0.0009753754,
   0.001018223,
   0.001102566,
   0.001249774,
   0.001471908,
   0.001870374,
   0.003218438};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1190,Graph0_fy1190,Graph0_fex1190,Graph0_fey1190);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01190 = new TH1F("Graph_Graph01190","S12S18_",100,0,3087.819);
   Graph_Graph01190->SetMinimum(0.0007703511);
   Graph_Graph01190->SetMaximum(0.1290763);
   Graph_Graph01190->SetDirectory(0);
   Graph_Graph01190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01190->SetLineColor(ci);
   Graph_Graph01190->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01190->GetXaxis()->SetRange(1,101);
   Graph_Graph01190->GetXaxis()->CenterTitle(true);
   Graph_Graph01190->GetXaxis()->SetLabelFont(42);
   Graph_Graph01190->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01190->GetXaxis()->SetTitleFont(42);
   Graph_Graph01190->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01190->GetYaxis()->CenterTitle(true);
   Graph_Graph01190->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01190->GetYaxis()->SetLabelFont(42);
   Graph_Graph01190->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01190->GetYaxis()->SetTitleFont(42);
   Graph_Graph01190->GetZaxis()->SetLabelFont(42);
   Graph_Graph01190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01190->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01190);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
