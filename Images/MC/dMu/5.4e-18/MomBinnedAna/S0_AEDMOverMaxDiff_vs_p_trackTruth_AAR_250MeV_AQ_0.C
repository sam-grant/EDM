void S0_AEDMOverMaxDiff_vs_p_trackTruth_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:37:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522.1561,-0.007620559,2726.815,0.03807566);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[12] = {
   199.4327,
   434.1114,
   628.3355,
   872.9688,
   1121.628,
   1371.699,
   1620.466,
   1869.06,
   2118.01,
   2364.35,
   2613.115,
   2830.689};
   Double_t Graph0_fy1034[12] = {
   0.02723328,
   0.0003322817,
   0.001357497,
   0.002081192,
   0.002068168,
   0.002584677,
   0.003108644,
   0.002439046,
   0.003224314,
   0.002856329,
   0.002975877,
   0.002686872};
   Double_t Graph0_fex1034[12] = {
   2.039757,
   0.06911025,
   0.06321361,
   0.06370373,
   0.06830711,
   0.07373666,
   0.08117881,
   0.0921306,
   0.1073358,
   0.1311309,
   0.1731962,
   0.2184321};
   Double_t Graph0_fey1034[12] = {
   0.003226337,
   0.0003368046,
   0.0002265492,
   0.0002397573,
   0.000263369,
   0.0002909372,
   0.0003428946,
   0.0003680486,
   0.0004397292,
   0.0005175558,
   0.0006596114,
   0.00105856};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","S0_",100,0,3094.258);
   Graph_Graph01034->SetMinimum(-0.003050937);
   Graph_Graph01034->SetMaximum(0.03350604);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01034->GetXaxis()->SetRange(25,81);
   Graph_Graph01034->GetXaxis()->CenterTitle(true);
   Graph_Graph01034->GetXaxis()->SetLabelFont(42);
   Graph_Graph01034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01034->GetXaxis()->SetTitleFont(42);
   Graph_Graph01034->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01034->GetYaxis()->CenterTitle(true);
   Graph_Graph01034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01034->GetYaxis()->SetLabelFont(42);
   Graph_Graph01034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01034->GetYaxis()->SetTitleFont(42);
   Graph_Graph01034->GetZaxis()->SetLabelFont(42);
   Graph_Graph01034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01034);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
