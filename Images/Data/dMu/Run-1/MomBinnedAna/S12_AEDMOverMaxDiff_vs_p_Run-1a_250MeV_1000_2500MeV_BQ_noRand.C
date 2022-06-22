void S12_AEDMOverMaxDiff_vs_p_Run-1a_250MeV_1000_2500MeV_BQ_noRand()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 16:42:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1892,-0.000190811,2705.706,0.006593646);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[11] = {
   455.9264,
   656.34,
   884.4537,
   1127.968,
   1373.739,
   1620.41,
   1867.284,
   2116.316,
   2359.815,
   2607.712,
   2783.425};
   Double_t Graph0_fy1049[11] = {
   0.01066959,
   0.001883791,
   0.004791762,
   0.002206446,
   0.00324324,
   0.00490273,
   0.000561399,
   0.004975329,
   0.001935095,
   0.002096105,
   0.0002201008};
   Double_t Graph0_fex1049[11] = {
   0.1349203,
   0.09296607,
   0.06087477,
   0.05497387,
   0.05336317,
   0.05856621,
   0.07024862,
   0.08794796,
   0.1135069,
   0.1586199,
   0.2651908};
   Double_t Graph0_fey1049[11] = {
   0.006032289,
   0.00193734,
   0.001218048,
   0.001073479,
   0.001056366,
   0.001160038,
   0.001384037,
   0.001731095,
   0.002267868,
   0.003273364,
   0.01315546};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S12",100,223.0016,3016.481);
   Graph_Graph01049->SetMinimum(0.0004876347);
   Graph_Graph01049->SetMaximum(0.0059152);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(28,82);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("alp");
   
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
