void S12_AverageVerticalOffsetVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:09:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1398[18] = {
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
   Double_t Graph0_fy1398[18] = {
   2.26249,
   1.038999,
   0.05213167,
   0.3728565,
   -0.3884404,
   -0.4295982,
   -0.5485897,
   -0.4411396,
   -0.1764448,
   -0.09630569,
   -0.05170697,
   0.07526713,
   -0.0283827,
   -0.0240397,
   0.1310195,
   0.05765168,
   0.02976861,
   0.2839865};
   Double_t Graph0_fex1398[18] = {
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
   Double_t Graph0_fey1398[18] = {
   0.1139857,
   0.06731977,
   0.04697146,
   0.03849252,
   0.03385775,
   0.03064202,
   0.02879969,
   0.02719886,
   0.02730429,
   0.02629046,
   0.02715898,
   0.02727638,
   0.02854889,
   0.02895025,
   0.03020164,
   0.03279194,
   0.03460719,
   0.03797594};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1398,Graph0_fy1398,Graph0_fex1398,Graph0_fey1398);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01398 = new TH1F("Graph_Graph01398","S12",100,349.5,2899.5);
   Graph_Graph01398->SetMinimum(-1.5);
   Graph_Graph01398->SetMaximum(2.5);
   Graph_Graph01398->SetDirectory(0);
   Graph_Graph01398->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01398->SetLineColor(ci);
   Graph_Graph01398->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01398->GetXaxis()->CenterTitle(true);
   Graph_Graph01398->GetXaxis()->SetLabelFont(42);
   Graph_Graph01398->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01398->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01398->GetXaxis()->SetTitleFont(42);
   Graph_Graph01398->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01398->GetYaxis()->CenterTitle(true);
   Graph_Graph01398->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01398->GetYaxis()->SetLabelFont(42);
   Graph_Graph01398->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01398->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01398->GetYaxis()->SetTitleFont(42);
   Graph_Graph01398->GetZaxis()->SetLabelFont(42);
   Graph_Graph01398->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01398->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01398);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1399[18] = {
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
   Double_t Graph0_fy1399[18] = {
   2.26249,
   1.038999,
   0.05213167,
   0.3728565,
   -0.3884404,
   -0.4295982,
   -0.5485897,
   -0.4411396,
   -0.1764448,
   -0.09630569,
   -0.05170697,
   0.07526713,
   -0.0283827,
   -0.0240397,
   0.1310195,
   0.05765168,
   0.02976861,
   0.2839865};
   Double_t Graph0_fex1399[18] = {
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
   Double_t Graph0_fey1399[18] = {
   0.1139857,
   0.06731977,
   0.04697146,
   0.03849252,
   0.03385775,
   0.03064202,
   0.02879969,
   0.02719886,
   0.02730429,
   0.02629046,
   0.02715898,
   0.02727638,
   0.02854889,
   0.02895025,
   0.03020164,
   0.03279194,
   0.03460719,
   0.03797594};
   gre = new TGraphErrors(18,Graph0_fx1399,Graph0_fy1399,Graph0_fex1399,Graph0_fey1399);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph013981399 = new TH1F("Graph_Graph_Graph013981399","S12",100,349.5,2899.5);
   Graph_Graph_Graph013981399->SetMinimum(-1.5);
   Graph_Graph_Graph013981399->SetMaximum(2.5);
   Graph_Graph_Graph013981399->SetDirectory(0);
   Graph_Graph_Graph013981399->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph013981399->SetLineColor(ci);
   Graph_Graph_Graph013981399->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph013981399->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph013981399->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph013981399->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph013981399->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph013981399->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph013981399->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph013981399->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph013981399->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph013981399->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph013981399->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph013981399->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph013981399->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph013981399->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph013981399->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph013981399->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph013981399);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1c","lpf");
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
