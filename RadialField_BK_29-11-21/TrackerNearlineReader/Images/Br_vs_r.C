void Br_vs_r()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 11 23:15:26 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,3.8,75,5.8);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_fx1005[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t S12_fy1005[5] = {
   4.683747,
   4.79661,
   4.483773,
   4.769555,
   4.742441};
   Double_t S12_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S12_fey1005[5] = {
   0.2119123,
   0.2093685,
   0.2149398,
   0.2216809,
   0.2078202};
   TGraphErrors *gre = new TGraphErrors(5,S12_fx1005,S12_fy1005,S12_fex1005,S12_fey1005);
   gre->SetName("S12");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTR#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,-60,60);
   Graph_Graph1005->SetMinimum(4);
   Graph_Graph1005->SetMaximum(5.6);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph1005->GetXaxis()->SetRange(1,100);
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#LTR#GT [mm]");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("ap");
   
   Double_t S18_fx1006[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t S18_fy1006[5] = {
   4.956675,
   4.674752,
   4.523803,
   5.172789,
   4.971311};
   Double_t S18_fex1006[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S18_fey1006[5] = {
   0.2058214,
   0.2049068,
   0.2131304,
   0.2170546,
   0.2014975};
   gre = new TGraphErrors(5,S18_fx1006,S18_fy1006,S18_fex1006,S18_fey1006);
   gre->SetName("S18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S181006 = new TH1F("Graph_S181006","Graph",100,-60,60);
   Graph_S181006->SetMinimum(4.202755);
   Graph_S181006->SetMaximum(5.49776);
   Graph_S181006->SetDirectory(0);
   Graph_S181006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S181006->SetLineColor(ci);
   Graph_S181006->GetXaxis()->SetLabelFont(42);
   Graph_S181006->GetXaxis()->SetLabelSize(0.035);
   Graph_S181006->GetXaxis()->SetTitleSize(0.035);
   Graph_S181006->GetXaxis()->SetTitleFont(42);
   Graph_S181006->GetYaxis()->SetLabelFont(42);
   Graph_S181006->GetYaxis()->SetLabelSize(0.035);
   Graph_S181006->GetYaxis()->SetTitleSize(0.035);
   Graph_S181006->GetYaxis()->SetTitleOffset(0);
   Graph_S181006->GetYaxis()->SetTitleFont(42);
   Graph_S181006->GetZaxis()->SetLabelFont(42);
   Graph_S181006->GetZaxis()->SetLabelSize(0.035);
   Graph_S181006->GetZaxis()->SetTitleSize(0.035);
   Graph_S181006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S181006);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
