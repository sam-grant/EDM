void S12S18_AverageVerticalOffsetVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 22:33:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[18] = {
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
   2687};
   Double_t Graph0_fy1041[18] = {
   2.509665,
   -0.06343194,
   0.2022744,
   0.4611658,
   -0.3059834,
   -0.3158655,
   -0.4264345,
   -0.339615,
   -0.1960432,
   -0.1005259,
   -0.0268767,
   0.02624802,
   -0.02528622,
   -0.01368258,
   0.04626117,
   -0.002244755,
   0.1170716,
   0.120759};
   Double_t Graph0_fex1041[18] = {
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
   Double_t Graph0_fey1041[18] = {
   0.07617211,
   0.0459897,
   0.03193405,
   0.02632648,
   0.02321175,
   0.02097249,
   0.01975264,
   0.01875506,
   0.01874947,
   0.01818237,
   0.01888609,
   0.01910809,
   0.01999897,
   0.02033157,
   0.02123773,
   0.02293627,
   0.02419392,
   0.02603482};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S12S18",100,349.5,2899.5);
   Graph_Graph01041->SetMinimum(-1.5);
   Graph_Graph01041->SetMaximum(2.5);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1042[18] = {
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
   2687};
   Double_t Graph0_fy1042[18] = {
   2.509665,
   -0.06343194,
   0.2022744,
   0.4611658,
   -0.3059834,
   -0.3158655,
   -0.4264345,
   -0.339615,
   -0.1960432,
   -0.1005259,
   -0.0268767,
   0.02624802,
   -0.02528622,
   -0.01368258,
   0.04626117,
   -0.002244755,
   0.1170716,
   0.120759};
   Double_t Graph0_fex1042[18] = {
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
   Double_t Graph0_fey1042[18] = {
   0.07617211,
   0.0459897,
   0.03193405,
   0.02632648,
   0.02321175,
   0.02097249,
   0.01975264,
   0.01875506,
   0.01874947,
   0.01818237,
   0.01888609,
   0.01910809,
   0.01999897,
   0.02033157,
   0.02123773,
   0.02293627,
   0.02419392,
   0.02603482};
   gre = new TGraphErrors(18,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010411042 = new TH1F("Graph_Graph_Graph010411042","S12S18",100,349.5,2899.5);
   Graph_Graph_Graph010411042->SetMinimum(-1.5);
   Graph_Graph_Graph010411042->SetMaximum(2.5);
   Graph_Graph_Graph010411042->SetDirectory(0);
   Graph_Graph_Graph010411042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010411042->SetLineColor(ci);
   Graph_Graph_Graph010411042->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010411042->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010411042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010411042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010411042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010411042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010411042->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010411042->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010411042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010411042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010411042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010411042->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010411042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010411042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010411042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010411042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010411042);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
