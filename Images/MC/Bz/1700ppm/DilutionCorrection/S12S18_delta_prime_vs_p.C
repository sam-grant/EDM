void S12S18_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 12 11:53:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(875,0.03124997,2375,4.71875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_delta_prime_vs_p_fx1005[5] = {
   1125,
   1375,
   1625,
   1875,
   2125};
   Double_t S12S18_delta_prime_vs_p_fy1005[5] = {
   1.279376,
   2.279675,
   1.822837,
   1.774566,
   2.14746};
   Double_t S12S18_delta_prime_vs_p_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_delta_prime_vs_p_fey1005[5] = {
   0.4367375,
   0.3768182,
   0.3665363,
   0.412525,
   0.5524246};
   TGraphErrors *gre = new TGraphErrors(5,S12S18_delta_prime_vs_p_fx1005,S12S18_delta_prime_vs_p_fy1005,S12S18_delta_prime_vs_p_fex1005,S12S18_delta_prime_vs_p_fey1005);
   gre->SetName("S12S18_delta_prime_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_delta_prime_vs_p1005 = new TH1F("Graph_S12S18_delta_prime_vs_p1005","S12S18",100,1025,2225);
   Graph_S12S18_delta_prime_vs_p1005->SetMinimum(0.5);
   Graph_S12S18_delta_prime_vs_p1005->SetMaximum(4.25);
   Graph_S12S18_delta_prime_vs_p1005->SetDirectory(0);
   Graph_S12S18_delta_prime_vs_p1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_delta_prime_vs_p1005->SetLineColor(ci);
   Graph_S12S18_delta_prime_vs_p1005->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_S12S18_delta_prime_vs_p1005->GetXaxis()->CenterTitle(true);
   Graph_S12S18_delta_prime_vs_p1005->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_delta_prime_vs_p1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_delta_prime_vs_p1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_delta_prime_vs_p1005->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_delta_prime_vs_p1005->GetYaxis()->SetTitle("#delta'_{g-2} [mrad]");
   Graph_S12S18_delta_prime_vs_p1005->GetYaxis()->CenterTitle(true);
   Graph_S12S18_delta_prime_vs_p1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_delta_prime_vs_p1005->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_delta_prime_vs_p1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_delta_prime_vs_p1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12S18_delta_prime_vs_p1005->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_delta_prime_vs_p1005->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_delta_prime_vs_p1005->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_delta_prime_vs_p1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_delta_prime_vs_p1005);
   
   
   TF1 *pol01006 = new TF1("pol0","pol0",1000,2250, TF1::EAddToList::kNo);
   pol01006->SetFillColor(19);
   pol01006->SetFillStyle(0);
   pol01006->SetLineColor(2);
   pol01006->SetLineWidth(2);
   pol01006->SetChisquare(3.331612);
   pol01006->SetNDF(4);
   pol01006->GetXaxis()->SetLabelFont(42);
   pol01006->GetXaxis()->SetTitleOffset(1);
   pol01006->GetXaxis()->SetTitleFont(42);
   pol01006->GetYaxis()->SetLabelFont(42);
   pol01006->GetYaxis()->SetTitleFont(42);
   pol01006->SetParameter(0,1.862593);
   pol01006->SetParError(0,0.186075);
   pol01006->SetParLimits(0,0,0);
   pol01006->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01006);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_delta_prime_vs_p","Sim: reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.9
#pm0.2
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
