void S12_ABz_vs_p_slice_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-5.608467,3712.5,19.14387);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1204[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1204[15] = {
   12.95703,
   -0.8352871,
   -0.202598,
   0.1023662,
   0.3499625,
   0.05386529,
   0.4778215,
   -0.0126871,
   0.2742239,
   0.1036317,
   0.0373246,
   0.2200694,
   -0.01549856,
   -0.1273188,
   0.02860521};
   Double_t Graph0_fex1204[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1204[15] = {
   2.061457,
   0.6477893,
   0.2358544,
   0.1783748,
   0.1536439,
   0.1395245,
   0.1271591,
   0.1201428,
   0.1124596,
   0.1074342,
   0.1082058,
   0.106487,
   0.1114063,
   0.1159475,
   0.1553138};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1204,Graph0_fy1204,Graph0_fex1204,Graph0_fey1204);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01204 = new TH1F("Graph_Graph01204","S12",100,0,3300);
   Graph_Graph01204->SetMinimum(-3.133232);
   Graph_Graph01204->SetMaximum(16.66864);
   Graph_Graph01204->SetDirectory(0);
   Graph_Graph01204->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01204->SetLineColor(ci);
   Graph_Graph01204->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01204->GetXaxis()->CenterTitle(true);
   Graph_Graph01204->GetXaxis()->SetLabelFont(42);
   Graph_Graph01204->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01204->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01204->GetXaxis()->SetTitleFont(42);
   Graph_Graph01204->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01204->GetYaxis()->CenterTitle(true);
   Graph_Graph01204->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01204->GetYaxis()->SetLabelFont(42);
   Graph_Graph01204->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01204->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01204->GetYaxis()->SetTitleFont(42);
   Graph_Graph01204->GetZaxis()->SetLabelFont(42);
   Graph_Graph01204->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01204->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01204);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
