void S12_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6966,-0.02304776,3406.985,0.8025076);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[11] = {
   451.637,
   653.3997,
   880.2817,
   1123.202,
   1371.221,
   1620.119,
   1867.021,
   2114.924,
   2362.277,
   2614.139,
   2787.456};
   Double_t Graph0_fy1095[11] = {
   0.2487755,
   0.1203289,
   0.1385138,
   0.1068015,
   0.1407408,
   0.1034674,
   0.1237407,
   0.08448923,
   0.09012609,
   0.07412169,
   0.1147024};
   Double_t Graph0_fex1095[11] = {
   0.1894701,
   0.1594013,
   0.115333,
   0.112845,
   0.1201609,
   0.1327309,
   0.1547769,
   0.1936791,
   0.2519213,
   0.3112052,
   0.3843093};
   Double_t Graph0_fey1095[11] = {
   0.2488388,
   0.08433752,
   0.04851568,
   0.03984341,
   0.03640702,
   0.03461877,
   0.03477565,
   0.0368367,
   0.03934178,
   0.03927449,
   0.08917357};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","S12_",100,217.8083,3021.48);
   Graph_Graph01095->SetMinimum(0.05950778);
   Graph_Graph01095->SetMaximum(0.7199521);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01095->GetXaxis()->SetRange(0,101);
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
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
