void S18_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 11:23:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-7.921337,2727,7.351764);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1023[22] = {
   -2.808105,
   -0.320507,
   0.2192371,
   0.00662121,
   -0.07847905,
   -0.08488316,
   -0.1001558,
   -0.05084588,
   0.01811564,
   0.07973729,
   -0.0006674637,
   -0.0009956496,
   -0.05550923,
   -0.004703403,
   -0.03477312,
   -0.002762154,
   -0.0001199512,
   -0.07602067,
   -0.01006629,
   -0.09385618,
   -0.2972094,
   2.48551};
   Double_t Graph0_fex1023[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1023[22] = {
   2.567715,
   0.2442282,
   0.1187565,
   0.07243937,
   0.0509241,
   0.04190758,
   0.03693542,
   0.03342433,
   0.03161779,
   0.03008925,
   0.03009372,
   0.02934197,
   0.03057611,
   0.0308423,
   0.03264156,
   0.03304932,
   0.03487254,
   0.0375848,
   0.03933452,
   0.04229587,
   0.1063235,
   2.320737};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","S18",100,49.5,3199.5);
   Graph_Graph01023->SetMinimum(-6.394027);
   Graph_Graph01023->SetMaximum(5.824454);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01023->GetXaxis()->SetRange(23,78);
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
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
