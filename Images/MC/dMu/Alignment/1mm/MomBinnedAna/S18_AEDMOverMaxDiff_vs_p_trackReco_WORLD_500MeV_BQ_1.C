void S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 15:00:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-125.9434,-0.009805429,3208.607,0.01313117);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1114[6] = {
   451.786,
   805.423,
   1237.784,
   1722.62,
   2205.525,
   2630.7};
   Double_t Graph0_fy1114[6] = {
   -0.003236763,
   0.0007066317,
   0.0008328086,
   0.001752658,
   0.0005258083,
   0.004090513};
   Double_t Graph0_fex1114[6] = {
   0.1764181,
   0.1599716,
   0.1555917,
   0.193239,
   0.2981714,
   0.3547003};
   Double_t Graph0_fey1114[6] = {
   -0.001316167,
   0.0002515746,
   0.0002324966,
   0.0003027,
   0.0004257417,
   0.0009982281};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1114,Graph0_fy1114,Graph0_fex1114,Graph0_fey1114);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01114 = new TH1F("Graph_Graph01114","S18_",100,233.6651,2848.999);
   Graph_Graph01114->SetMinimum(-0.007511769);
   Graph_Graph01114->SetMaximum(0.01083751);
   Graph_Graph01114->SetDirectory(0);
   Graph_Graph01114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01114->SetLineColor(ci);
   Graph_Graph01114->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01114->GetXaxis()->SetRange(0,101);
   Graph_Graph01114->GetXaxis()->CenterTitle(true);
   Graph_Graph01114->GetXaxis()->SetLabelFont(42);
   Graph_Graph01114->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01114->GetXaxis()->SetTitleFont(42);
   Graph_Graph01114->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 500 MeV");
   Graph_Graph01114->GetYaxis()->CenterTitle(true);
   Graph_Graph01114->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01114->GetYaxis()->SetLabelFont(42);
   Graph_Graph01114->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01114->GetYaxis()->SetTitleFont(42);
   Graph_Graph01114->GetZaxis()->SetLabelFont(42);
   Graph_Graph01114->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01114);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
