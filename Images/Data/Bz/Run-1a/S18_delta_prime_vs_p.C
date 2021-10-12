void S18_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 12 12:27:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,53,800,600);
   c->Range(875,-1.9375,2375,2.4375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_delta_prime_vs_p_fx1003[5] = {
   1125,
   1375,
   1625,
   1875,
   2125};
   Double_t S18_delta_prime_vs_p_fy1003[5] = {
   -0.03747432,
   0.20507,
   -0.1306191,
   0.3156231,
   -0.2588025};
   Double_t S18_delta_prime_vs_p_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S18_delta_prime_vs_p_fey1003[5] = {
   0.2704118,
   0.2222991,
   0.2184375,
   0.2516323,
   0.3396643};
   TGraphErrors *gre = new TGraphErrors(5,S18_delta_prime_vs_p_fx1003,S18_delta_prime_vs_p_fy1003,S18_delta_prime_vs_p_fex1003,S18_delta_prime_vs_p_fey1003);
   gre->SetName("S18_delta_prime_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_delta_prime_vs_p1003 = new TH1F("Graph_S18_delta_prime_vs_p1003","S18",100,1025,2225);
   Graph_S18_delta_prime_vs_p1003->SetMinimum(-1.5);
   Graph_S18_delta_prime_vs_p1003->SetMaximum(2);
   Graph_S18_delta_prime_vs_p1003->SetDirectory(0);
   Graph_S18_delta_prime_vs_p1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_delta_prime_vs_p1003->SetLineColor(ci);
   Graph_S18_delta_prime_vs_p1003->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_S18_delta_prime_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_S18_delta_prime_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_S18_delta_prime_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_delta_prime_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_delta_prime_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_S18_delta_prime_vs_p1003->GetYaxis()->SetTitle("#delta'_{g-2} [mrad]");
   Graph_S18_delta_prime_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_S18_delta_prime_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_delta_prime_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_S18_delta_prime_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_delta_prime_vs_p1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_delta_prime_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_S18_delta_prime_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_S18_delta_prime_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_S18_delta_prime_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_delta_prime_vs_p1003);
   
   
   TF1 *pol01004 = new TF1("pol0","pol0",1000,2250, TF1::EAddToList::kNo);
   pol01004->SetFillColor(19);
   pol01004->SetFillStyle(0);
   pol01004->SetLineColor(2);
   pol01004->SetLineWidth(2);
   pol01004->SetChisquare(3.214459);
   pol01004->SetNDF(4);
   pol01004->GetXaxis()->SetLabelFont(42);
   pol01004->GetXaxis()->SetTitleOffset(1);
   pol01004->GetXaxis()->SetTitleFont(42);
   pol01004->GetYaxis()->SetLabelFont(42);
   pol01004->GetYaxis()->SetTitleFont(42);
   pol01004->SetParameter(0,0.04590034);
   pol01004->SetParError(0,0.1122744);
   pol01004->SetParLimits(0,0,0);
   pol01004->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01004);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_delta_prime_vs_p","Sim: reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.046
#pm0.1
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4580451,0.94,0.5419549,0.995,"blNDC");
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
