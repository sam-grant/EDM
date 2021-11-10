void S12S18_EDM_delta_prime_vs_p_900-2250MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-2.105911,2499.5,1.856184);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1101[11] = {
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
   2187};
   Double_t _fy1101[11] = {
   -0.1248632,
   -0.2243288,
   -0.3334243,
   -0.5706846,
   -1.042241,
   -0.2617302,
   -0.07582785,
   -0.2350815,
   -0.2768135,
   0.04837383,
   0.6495616};
   Double_t _fex1101[11] = {
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
   Double_t _fey1101[11] = {
   0.5763047,
   0.4687608,
   0.4021016,
   0.3658302,
   0.3433955,
   0.3462768,
   0.3450595,
   0.3754957,
   0.4069323,
   0.4751613,
   0.5582527};
   TGraphErrors *gre = new TGraphErrors(11,_fx1101,_fy1101,_fex1101,_fey1101);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1101 = new TH1F("Graph_Graph1101","S12S18_",100,812,2312);
   Graph_Graph1101->SetMinimum(-1.709701);
   Graph_Graph1101->SetMaximum(1.459975);
   Graph_Graph1101->SetDirectory(0);
   Graph_Graph1101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1101->SetLineColor(ci);
   Graph_Graph1101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1101->GetXaxis()->CenterTitle(true);
   Graph_Graph1101->GetXaxis()->SetLabelFont(42);
   Graph_Graph1101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1101->GetXaxis()->SetTitleFont(42);
   Graph_Graph1101->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1101->GetYaxis()->CenterTitle(true);
   Graph_Graph1101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1101->GetYaxis()->SetLabelFont(42);
   Graph_Graph1101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1101->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1101->GetYaxis()->SetTitleFont(42);
   Graph_Graph1101->GetZaxis()->SetLabelFont(42);
   Graph_Graph1101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1101);
   
   
   TF1 *pol01102 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01102->SetFillColor(19);
   pol01102->SetFillStyle(0);
   pol01102->SetLineColor(2);
   pol01102->SetLineWidth(2);
   pol01102->SetChisquare(9.241962);
   pol01102->SetNDF(10);
   pol01102->GetXaxis()->SetLabelFont(42);
   pol01102->GetXaxis()->SetTitleOffset(1);
   pol01102->GetXaxis()->SetTitleFont(42);
   pol01102->GetYaxis()->SetLabelFont(42);
   pol01102->GetYaxis()->SetTitleFont(42);
   pol01102->SetParameter(0,-0.3038649);
   pol01102->SetParError(0,0.1219816);
   pol01102->SetParLimits(0,0,0);
   pol01102->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01102);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.3
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
