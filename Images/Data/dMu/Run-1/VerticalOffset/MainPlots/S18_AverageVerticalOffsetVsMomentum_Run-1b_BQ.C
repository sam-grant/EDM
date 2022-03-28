void S18_AverageVerticalOffsetVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:09:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1284[18] = {
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
   Double_t Graph0_fy1284[18] = {
   2.501997,
   -0.2054896,
   0.1190655,
   0.2634929,
   -0.3916806,
   -0.3438065,
   -0.4209571,
   -0.2894025,
   -0.2707288,
   -0.1751652,
   -0.1093814,
   -0.07810504,
   -0.02078261,
   -0.005457446,
   0.01007394,
   -0.1087431,
   0.0550715,
   0.05285043};
   Double_t Graph0_fex1284[18] = {
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
   Double_t Graph0_fey1284[18] = {
   0.09954315,
   0.06070403,
   0.04276608,
   0.03523577,
   0.03121583,
   0.02825255,
   0.02674688,
   0.0255079,
   0.02545612,
   0.02477205,
   0.02590683,
   0.02631753,
   0.02777791,
   0.02830544,
   0.02936304,
   0.0318991,
   0.03344387,
   0.03588266};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1284,Graph0_fy1284,Graph0_fex1284,Graph0_fey1284);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01284 = new TH1F("Graph_Graph01284","S18",100,349.5,2899.5);
   Graph_Graph01284->SetMinimum(-1.5);
   Graph_Graph01284->SetMaximum(2.5);
   Graph_Graph01284->SetDirectory(0);
   Graph_Graph01284->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01284->SetLineColor(ci);
   Graph_Graph01284->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01284->GetXaxis()->CenterTitle(true);
   Graph_Graph01284->GetXaxis()->SetLabelFont(42);
   Graph_Graph01284->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01284->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01284->GetXaxis()->SetTitleFont(42);
   Graph_Graph01284->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01284->GetYaxis()->CenterTitle(true);
   Graph_Graph01284->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01284->GetYaxis()->SetLabelFont(42);
   Graph_Graph01284->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01284->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01284->GetYaxis()->SetTitleFont(42);
   Graph_Graph01284->GetZaxis()->SetLabelFont(42);
   Graph_Graph01284->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01284->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01284);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1285[18] = {
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
   Double_t Graph0_fy1285[18] = {
   2.501997,
   -0.2054896,
   0.1190655,
   0.2634929,
   -0.3916806,
   -0.3438065,
   -0.4209571,
   -0.2894025,
   -0.2707288,
   -0.1751652,
   -0.1093814,
   -0.07810504,
   -0.02078261,
   -0.005457446,
   0.01007394,
   -0.1087431,
   0.0550715,
   0.05285043};
   Double_t Graph0_fex1285[18] = {
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
   Double_t Graph0_fey1285[18] = {
   0.09954315,
   0.06070403,
   0.04276608,
   0.03523577,
   0.03121583,
   0.02825255,
   0.02674688,
   0.0255079,
   0.02545612,
   0.02477205,
   0.02590683,
   0.02631753,
   0.02777791,
   0.02830544,
   0.02936304,
   0.0318991,
   0.03344387,
   0.03588266};
   gre = new TGraphErrors(18,Graph0_fx1285,Graph0_fy1285,Graph0_fex1285,Graph0_fey1285);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph012841285 = new TH1F("Graph_Graph_Graph012841285","S18",100,349.5,2899.5);
   Graph_Graph_Graph012841285->SetMinimum(-1.5);
   Graph_Graph_Graph012841285->SetMaximum(2.5);
   Graph_Graph_Graph012841285->SetDirectory(0);
   Graph_Graph_Graph012841285->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph012841285->SetLineColor(ci);
   Graph_Graph_Graph012841285->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph012841285->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph012841285->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph012841285->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph012841285->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph012841285->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph012841285->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph012841285->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph012841285->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph012841285->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph012841285->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph012841285->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph012841285->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph012841285->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph012841285->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph012841285->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph012841285);
   
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
