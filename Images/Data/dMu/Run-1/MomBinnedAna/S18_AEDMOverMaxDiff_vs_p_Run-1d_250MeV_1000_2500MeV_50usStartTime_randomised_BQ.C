void S18_AEDMOverMaxDiff_vs_p_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 12 23:22:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.3487,-0.001893296,2703.496,0.003469935);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   456.4516,
   653.3441,
   883.6048,
   1127.183,
   1372.834,
   1619.467,
   1866.49,
   2115.652,
   2359.14,
   2606.684,
   2781.155};
   Double_t Graph0_fy1082[11] = {
   -0.001787392,
   0.002322926,
   -0.0005619113,
   -0.0006271723,
   0.001542271,
   -0.001701592,
   0.0007903996,
   0.002482708,
   0.0003530541,
   0.0005169214,
   0.02691725};
   Double_t Graph0_fex1082[11] = {
   0.09432122,
   0.06716796,
   0.04563289,
   0.0415835,
   0.04148536,
   0.04630593,
   0.05732059,
   0.07282875,
   0.0969775,
   0.1332929,
   0.2302059};
   Double_t Graph0_fey1082[11] = {
   -0.004257274,
   0.001392974,
   -0.0009129496,
   -0.0008162931,
   0.000824524,
   -0.0009225407,
   0.00113382,
   0.001440189,
   0.001941103,
   0.002789358,
   0.01252398};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S18",100,223.8545,3013.888);
   Graph_Graph01082->SetMinimum(-0.001356973);
   Graph_Graph01082->SetMaximum(0.002933611);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01082->GetXaxis()->SetRange(28,82);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
