void S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7144,3.153103,3408.481,28.23171);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[11] = {
   451.8866,
   653.0027,
   880.3991,
   1123.088,
   1370.685,
   1619.419,
   1866.328,
   2114.37,
   2363.365,
   2613.147,
   2788.635};
   Double_t Graph0_fy1139[11] = {
   14.06572,
   16.61281,
   18.50119,
   20.03748,
   21.07401,
   21.43717,
   21.16694,
   20.23553,
   18.74741,
   16.25257,
   13.62776};
   Double_t Graph0_fex1139[11] = {
   0.1946554,
   0.1660176,
   0.1206834,
   0.1185338,
   0.1274588,
   0.1424419,
   0.1680339,
   0.2132611,
   0.2821374,
   0.3382844,
   0.4388311};
   Double_t Graph0_fey1139[11] = {
   0.0585229,
   0.02822248,
   0.02207239,
   0.02330715,
   0.02638969,
   0.03007075,
   0.03513438,
   0.04255577,
   0.05202437,
   0.05636936,
   0.1414807};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","S18_",100,217.9537,3022.812);
   Graph_Graph01139->SetMinimum(5.660963);
   Graph_Graph01139->SetMaximum(25.72384);
   Graph_Graph01139->SetDirectory(0);
   Graph_Graph01139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01139->SetLineColor(ci);
   Graph_Graph01139->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01139->GetXaxis()->SetRange(0,101);
   Graph_Graph01139->GetXaxis()->CenterTitle(true);
   Graph_Graph01139->GetXaxis()->SetLabelFont(42);
   Graph_Graph01139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01139->GetXaxis()->SetTitleFont(42);
   Graph_Graph01139->GetYaxis()->CenterTitle(true);
   Graph_Graph01139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01139->GetYaxis()->SetLabelFont(42);
   Graph_Graph01139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01139->GetYaxis()->SetTitleFont(42);
   Graph_Graph01139->GetZaxis()->SetLabelFont(42);
   Graph_Graph01139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01139);
   
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
