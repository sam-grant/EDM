void Y_3()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_3__9 = new TH1F("Y_3__9","Plane 3",100,-100,100);
   Y_3__9->SetBinContent(28,1);
   Y_3__9->SetBinContent(34,1);
   Y_3__9->SetBinContent(36,2);
   Y_3__9->SetBinContent(38,1);
   Y_3__9->SetBinContent(39,2);
   Y_3__9->SetBinContent(40,2);
   Y_3__9->SetBinContent(41,9);
   Y_3__9->SetBinContent(42,10);
   Y_3__9->SetBinContent(43,41);
   Y_3__9->SetBinContent(44,23);
   Y_3__9->SetBinContent(45,15);
   Y_3__9->SetBinContent(46,18);
   Y_3__9->SetBinContent(47,12);
   Y_3__9->SetBinContent(48,18);
   Y_3__9->SetBinContent(49,42);
   Y_3__9->SetBinContent(50,80);
   Y_3__9->SetBinContent(51,49);
   Y_3__9->SetBinContent(52,15);
   Y_3__9->SetBinContent(53,18);
   Y_3__9->SetBinContent(54,19);
   Y_3__9->SetBinContent(55,15);
   Y_3__9->SetBinContent(56,20);
   Y_3__9->SetBinContent(57,21);
   Y_3__9->SetBinContent(58,33);
   Y_3__9->SetBinContent(59,23);
   Y_3__9->SetBinContent(60,4);
   Y_3__9->SetBinContent(61,1);
   Y_3__9->SetBinContent(62,1);
   Y_3__9->SetBinContent(64,2);
   Y_3__9->SetBinContent(67,2);
   Y_3__9->SetBinContent(69,1);
   Y_3__9->SetBinContent(73,2);
   Y_3__9->SetBinContent(75,3);
   Y_3__9->SetEntries(506);
   Y_3__9->SetLineWidth(3);
   Y_3__9->GetXaxis()->SetTitle("Y [mm]");
   Y_3__9->GetXaxis()->CenterTitle(true);
   Y_3__9->GetXaxis()->SetLabelFont(42);
   Y_3__9->GetXaxis()->SetTitleSize(0.04);
   Y_3__9->GetXaxis()->SetTitleOffset(1.1);
   Y_3__9->GetXaxis()->SetTitleFont(42);
   Y_3__9->GetYaxis()->SetTitle("Ghost tracks");
   Y_3__9->GetYaxis()->CenterTitle(true);
   Y_3__9->GetYaxis()->SetNdivisions(4000510);
   Y_3__9->GetYaxis()->SetLabelFont(42);
   Y_3__9->GetYaxis()->SetTitleSize(0.04);
   Y_3__9->GetYaxis()->SetTitleOffset(1.1);
   Y_3__9->GetYaxis()->SetTitleFont(42);
   Y_3__9->GetZaxis()->SetLabelFont(42);
   Y_3__9->GetZaxis()->SetTitleOffset(1);
   Y_3__9->GetZaxis()->SetTitleFont(42);
   Y_3__9->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
