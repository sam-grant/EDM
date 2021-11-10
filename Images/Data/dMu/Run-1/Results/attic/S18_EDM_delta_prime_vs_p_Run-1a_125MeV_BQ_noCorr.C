void S18_EDM_delta_prime_vs_p_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 20:00:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1255604,2843.25,0.1885443);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1051[14] = {
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
   2437};
   Double_t _fy1051[14] = {
   0.03149196,
   0.03266468,
   0.0787793,
   0.01154615,
   0.02833409,
   -0.04124765,
   0.01398092,
   0.02335863,
   0.01754459,
   -0.02068444,
   0.05974637,
   0.04082155,
   9.884564e-05,
   0.01842475};
   Double_t _fex1051[14] = {
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
   Double_t _fey1051[14] = {
   0.04568796,
   0.03769401,
   0.03319687,
   0.02997148,
   0.02838367,
   0.02699175,
   0.02696171,
   0.02627394,
   0.02739588,
   0.02771421,
   0.02924723,
   0.02964325,
   0.03126518,
   0.03357207};
   TGraphErrors *gre = new TGraphErrors(14,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","S18_",100,649.5,2599.5);
   Graph_Graph1051->SetMinimum(-0.09414994);
   Graph_Graph1051->SetMaximum(0.1571339);
   Graph_Graph1051->SetDirectory(0);
   Graph_Graph1051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1051->SetLineColor(ci);
   Graph_Graph1051->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1051->GetXaxis()->CenterTitle(true);
   Graph_Graph1051->GetXaxis()->SetLabelFont(42);
   Graph_Graph1051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1051->GetXaxis()->SetTitleFont(42);
   Graph_Graph1051->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1051->GetYaxis()->CenterTitle(true);
   Graph_Graph1051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1051->GetYaxis()->SetLabelFont(42);
   Graph_Graph1051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1051->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1051->GetYaxis()->SetTitleFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelFont(42);
   Graph_Graph1051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1051);
   
   
   TF1 *pol01052 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01052->SetFillColor(19);
   pol01052->SetFillStyle(0);
   pol01052->SetLineColor(2);
   pol01052->SetLineWidth(2);
   pol01052->SetChisquare(13.55701);
   pol01052->SetNDF(13);
   pol01052->GetXaxis()->SetLabelFont(42);
   pol01052->GetXaxis()->SetTitleOffset(1);
   pol01052->GetXaxis()->SetTitleFont(42);
   pol01052->GetYaxis()->SetLabelFont(42);
   pol01052->GetYaxis()->SetTitleFont(42);
   pol01052->SetParameter(0,0.01828124);
   pol01052->SetParError(0,0.008033943);
   pol01052->SetParLimits(0,0,0);
   pol01052->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01052);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.018
#pm0.008
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
