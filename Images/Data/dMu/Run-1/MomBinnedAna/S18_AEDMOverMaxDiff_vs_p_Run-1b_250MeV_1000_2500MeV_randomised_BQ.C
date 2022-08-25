void S18_AEDMOverMaxDiff_vs_p_Run-1b_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 12 23:21:29 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.7571,-0.004564264,2703.823,0.003377436);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   455.7399,
   653.8252,
   883.629,
   1127.175,
   1372.867,
   1619.553,
   1866.461,
   2116.166,
   2359.269,
   2607.242,
   2781.45};
   Double_t Graph0_fy1082[11] = {
   0.004289934,
   0.00210274,
   0.002177843,
   0.001804114,
   -0.0003673245,
   -0.00126871,
   -0.00186098,
   0.001440445,
   0.001103059,
   -0.005147221,
   0.03847343};
   Double_t Graph0_fex1082[11] = {
   0.1316046,
   0.09316094,
   0.06346946,
   0.05779289,
   0.05748618,
   0.0638632,
   0.07853467,
   0.09949662,
   0.1316859,
   0.1793295,
   0.298367};
   Double_t Graph0_fey1082[11] = {
   0.005875334,
   0.001930746,
   0.001268634,
   0.001135002,
   -0.001143208,
   -0.001272056,
   -0.001554291,
   0.001965,
   0.002630139,
   -0.003748354,
   0.01631751};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S18",100,222.9942,3014.363);
   Graph_Graph01082->SetMinimum(-0.003770094);
   Graph_Graph01082->SetMaximum(0.002583266);
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
