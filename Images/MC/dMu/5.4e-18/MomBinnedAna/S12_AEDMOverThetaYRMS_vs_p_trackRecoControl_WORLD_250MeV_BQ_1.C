void S12_AEDMOverThetaYRMS_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:39:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.8037,-0.08043702,3028.657,0.007659559);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[11] = {
   452.8872,
   656.3485,
   884.581,
   1123.521,
   1363.535,
   1601.503,
   1825.269,
   2100.54,
   2414.205,
   2638.053,
   2790.781};
   Double_t Graph0_fy1064[11] = {
   0.0003154273,
   -0.009882595,
   -0.004260787,
   -0.003414838,
   -0.003439995,
   -0.01509088,
   -0.01525589,
   -0.07851325,
   -0.00912324,
   -0.0006537184,
   -0.06787191};
   Double_t Graph0_fex1064[11] = {
   0.2848927,
   0.2126365,
   0.1423016,
   0.1309017,
   0.1503931,
   0.2140097,
   0.4416789,
   2.4969,
   1.046089,
   0.5704598,
   0.500334};
   Double_t Graph0_fey1064[11] = {
   0.01224451,
   -0.004436463,
   -0.002826801,
   -0.002575009,
   -0.002989059,
   -0.004399874,
   -0.01046061,
   -0.04106247,
   -0.02267867,
   -0.01180771,
   -0.02254992};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S12_",100,218.7344,3025.149);
   Graph_Graph01064->SetMinimum(-0.07162736);
   Graph_Graph01064->SetMaximum(-0.001150099);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(19,91);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
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
